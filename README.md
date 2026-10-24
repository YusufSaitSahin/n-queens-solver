# N-Queens Problem Solver

Bu proje, meşhur N-Vezir (N-Queens) problemini C dilinde **Backtracking (Geri İzleme)** ve özyineleme (recursion) mantığı kullanarak çözer. Amacımız, N boyutlu bir satranç tahtasına N adet veziri hiçbir şekilde birbirini dikey, yatay veya çapraz olarak tehdit etmeyecek biçimde yerleştirmektir.

## Proje Detayları
* **Bellek Optimizasyonu:** Tahtayı temsil etmek için 2 boyutlu büyük bir matris yerine, daha verimli olan **1 boyutlu dizi** yapısı kullanılmıştır. Dizideki indeks numaraları satırları, içindeki değerler ise sütunları temsil eder.
* **Tüm İhtimaller:** Algoritma ilk bulduğu çözümde durmaz, geçerli olan tüm olası dizilimleri hesaplayarak ekrana çizer.

## Nasıl Çalıştırılır?
Bilgisayarınızda GCC (C derleyicisi) kuruluysa, terminalde şu komutları sırasıyla çalıştırabilirsiniz:

```bash
# Kodu derlemek için
gcc N_Queens_Problem.c -o n_queens

# Programı çalıştırmak için (Windows)
.\n_queens.exe

# Programı çalıştırmak için (Mac/Linux)
./n_queens
