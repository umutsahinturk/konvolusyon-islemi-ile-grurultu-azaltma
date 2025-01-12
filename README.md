# Konvolüsyon İşlemi ile Gürültü Azaltm
YRT Aviyonik Departmanı Yazılım Ekibi destek ekip ödevi için hazırlanmıştır.

### Ufak Bir Beyan❗
Bu kodda matrisleri kullanıcıdan almayıp kodun içine gömülü bir şekilde oluşturmamın sebebi gürültü azaltma algoritmalarının kullanım alanlarıdır. Her ne kadar bu kodda oldukça küçük bir matris üzerinde gürültü azaltma uyguluyor olsak da normal şartlarda çok daha büyük matrislerle çalışıyor olmamız kaçınılmaz. Bu matrisleri kullanıcıdan elle girmesini beklemek saçma olacaktır. Burada koda gömülü olarak oluşturulan matrisleri, daha gelişmiş uygulamalarda başka fonksiyonlarla oluşturmak mümkündür. Bu matrisleri kullanıcıdan almamış olmamı puan kırma sebebi olarak görmeyin lütfen :)

## Kullanım Talimatları 📝
1. Görüntü ve filtre matrislerinin boyutlarını girin.
2. Görüntü ve filtre matrislerini girin.
3. Kodu çalıştırın.
4. Konvolüsyon işlemi ile gürültüsü azaltılmış matrisi göreceksiniz.

## Kod Açıklaması 💻

Kodun en başında görüntü ve filtre matrislerinin boyutları define ifadesi ile belirlenmiştir.

### Main Fonksiyonu
Bu fonksiyonun içinde ilk olarak görüntü filtre ve sonuç matrisleri tanımlanır. Daha sonra filtre matrisinin elemanları toplamı hesaplnır. Ardından sonuç matrisinin elemanları üzerinde tek tek gezinerek her bir elemanın değeri konvolüsyon işlemi fonksiyonu ile hesaplnır. Son olarak batrisi bastır fonjsiyonu ile elde edilen sonuç matrisi ekrana bastırılır.

### Konvulüsyon İşlemi Uygulama Fonksiyonu
Bu fonksiyon; bir görüntü ve filtre matrisi, sonuç matrisinin kaçıncı x(i) ve y(j) elemanı üzerinde işlem yapıldığı bilgisi ve filtre matrisinin elemanları toplamı bilgisiyle çalışır. Konvulüsyon işlemi, ödev dosyasında verilen açıklamaya uygun olarak yapılır ve sonuç matrisinin istenen elemanı hesaplanmış olur.


### Matrisi Ekrana Bastırma Fonksiyonu
Bu fonksiyon, matrisin her bir elemanının üzerinde tek tek dolaşıp elemanları ekrana bastırır.
