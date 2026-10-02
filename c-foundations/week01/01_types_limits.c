#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int main(void) {
    printf("=== GÖMÜLÜ SİSTEMLER VERİ TİPLERİ VE BOYUTLARI ===\n\n");

    // Standard Integer Types (stdint.h)
    printf("uint8_t  : %lu byte | Min: 0           | Max: %u\n", sizeof(uint8_t), UINT8_MAX);
    printf("int8_t   : %lu byte | Min: %d        | Max: %d\n", sizeof(int8_t), INT8_MIN, INT8_MAX);
    printf("uint16_t : %lu byte | Min: 0           | Max: %u\n", sizeof(uint16_t), UINT16_MAX);
    printf("uint32_t : %lu byte | Min: 0           | Max: %u\n", sizeof(uint32_t), UINT32_MAX);
    printf("uint64_t : %lu byte | Min: 0           | Max: %llu\n\n", sizeof(uint64_t), ULLONG_MAX);

    // Otomotiv Veri Tipi Senaryosu (Taşma / Overflow Testi)
    uint8_t engine_rpm_byte = 255; // 8-bitlik bir sayacın maksimum değeri
    printf("--- TAŞMA (OVERFLOW) TESTİ ---\n");
    printf("Mevcut Sinyal Değeri (uint8_t) : %u\n", engine_rpm_byte);

    engine_rpm_byte = engine_rpm_byte + 1; // 255 + 1 = ?
    printf("1 Eklendikten Sonra Yeni Değer : %u (Sıfırlandı!)\n", engine_rpm_byte);

    return 0;
}