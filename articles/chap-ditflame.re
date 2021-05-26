= 資格試験に挑戦する目標を立てる際、気にしたい事

//flushright{
ふーれむ@ditflame
//}

よく、会社での評価面談やそれに伴う計画を立てる過程で「資格試験の取得」が目標にあがる事があります。

ですが、資格試験を受験する場合において、どういった事を気を付けるとアウトプット(要は資格試験の合格)を出しやすいかは意外に知見がまとまっていないような気がします。

本項は、そういった点について記載してみます。

== 資格試験に20年ぐらい挑戦し続けてみた

エンジニアのスキルセット評価において、ときおり指標となりがちなのが資格試験だったりします。

資格は環境によっては評価されがちですし、別の環境になると全然評価されなかったりもします。
前者はSIerなどで顕著ですね。後者は例えばスタートアップだったりWeb系だったり、
資格とかより手を動かしてガンガンプロダクトに寄与できる方が重宝がられる文化のところに多い印象があります。

私は現在、社内SEをしているのですが、前職はSIerに在籍していました。在籍当時は資格報奨金がそれとなく(といっても最初は2年間毎月支給でしたが、途中で一時金になってしまいましたが…)
出ており、社内の評価制度における評価点でもありましたので、当時はまあやってみようか…　ぐらいの感じで試験を受けていました。

正直、それぞれの試験については、試験ごとにそれなりに準備はするのですが、簡単に受かるものでもない事から、たいていの試験については
「うおー！今回で一撃で取るぜ！」みたいなテンションではなかったのが正直なところです。

そもそも仕事しながら資格試験を取るのって、結構それなりに無理があるんですよね。
特に稼働を上げてナンボ　みたいな業種（ex.受諾開発とか…）だと、会社でプロジェクトを回していくなかで
どうしても稼働が上がれば上がるほど会社の業績は上がりますが、その反面、個人の時間は目減りしてしまうわけで、
キャッチアップする　→　スキルがある程個人に仕事や作業が飛んでくる　→　キャッチアップの時間いつ取るの？　みたいな悪いサイクルに陥りがちです。

ところが、そんな中でも折れずに継続的にずーっとやり続けていると、なぜか資格って取れ出す時があるんですよね…
なお、単純に個人のスキルが継続研鑽によって成長するから　というだけの理由でもなかったりするように思っています。

私が今までいろいろとやってきた結果、取得できた資格が以下の通りになります。
（大体なにか必要性なり長期計画があった上で取得しているものが多いので、個人的には資格マニアというわけでもないし、そのつもりもないんですが…）

ここでは、あえて生々しい方が参考になると思い、エントリークラスの資格なども漏れなく記載しています。

 * 初級システムアドミニストレータ
 * 基本情報技術者
 * 情報セキュリティマネジメント
 * 第一種情報処理技術者（現：応用情報技術者試験）
 * 情報セキュリティスペシャリスト（現：情報処理安全確保支援士試験）
 * エンベデッドシステムスペシャリスト
 * データベースシステムスペシャリスト

 * 画像処理エンジニア検定（エキスパート）
 * CGエンジニア検定（エキスパート）

 * 第四級アマチュア無線技士
 * 第三級アマチュア無線技士
 * 電気通信の工事担任者　DD第一種（現：デジタル一級）

 * 日商簿記３級
 * 全経簿記２級
 * 全経簿記１級（工簿）

 * 販売士３級
 * 販売士２級

 * 知的財産管理技能検定３級

 * 技術士第一次試験合格(情報工学部門)

これらの試験を受かってきた結果、わかった事などをつらつらと書いてみようと思います。

== スキルセットの分界点みたいなものが明確にあるやつがある

たとえばITエンジニアの方だと、「ITスキル標準(ITSS)」@<fn>{ITSS}といった言葉を聞いたことがある方も多いかもしれません。

//footnote[ITSS][https://www.ipa.go.jp/jinzai/itss/]

上の私が取得した資格でもIPA(情報処理推進機構)が主催する情報処理技術者試験が資格数としては多いのですが、
実は「IPAが纏めているITスキル標準には明記されているが、情報処理技術者試験の試験制度において現在、高度情報技術者試験としては試験がなされていないスキルセット」
というのが存在します。

それは、ヒューマンインターフェース、マルチメディア関連（画像処理・音声処理）に関するスキルです。@<fn>{SHIKEN}

//footnote[SHIKEN][https://www.jitec.ipa.go.jp/1_13download/youkou_ver4_6.pdf]

//image[ipa-testmatrix][情報処理技術者試験の試験区分出題範囲一覧表(午前試験)][scale=0.5]

恐らくですが、マルチメディア分野においては情報処理技術者試験とは別にCG検定が既に試験制度としては確立しており、
CG検定については元々は技能検定だったことからかつては公的資格だったという歴史的な経緯もあって、
試験の棲み分けの観点からマルチメディア分野についてはCG検定で試験、その他の領域については情報処理技術者試験で試験をしている
といった状況であろうと推測されます。

(CG検定の試験範囲にヒューマンインターフェースを含むのかは判断が難しいところで、
私も過去問の出題傾向などは見てみたのですがよくわからないなぁ…というのが正直なところです。)

また例えば、かつてはネットワークスペシャリスト試験では電気通信の工事担任者試験や、電気通信主任技術者試験と似通った問題（例えばISDNの構成など）が
頻出だった時代がありましたが、最近ではあまり出題が見なくなりましたね。こういった点も試験の棲み分けが進んできた結果なのだろうな　という気がします。

== スキルセットの分界点みたいなものが明確になさそうなやつもある

逆に試験の開催主体が違うと似たような試験が別の試験であったりします。

私が受験してきた中でいうと

 * 日商簿記３級
 * 全経簿記２級

これ、実は範囲がほぼほぼ一緒でした。(私が受けた時点では勘定科目に多少の差がある程度でした。今もそこまで劇的な差は無いように思います。)

あと、ITに関連する技術系資格でいうと、実は主管庁がバラバラでして
(デジタル庁が発足するとちゃんと一本化されるんでしょうか…　資格試験を作ると既得権益もセットで発生するので、
　それはどうしても利権と切り離せない面があるので、恐らくですが完全に一本化はできないんじゃないのかなぁとは思うのですが。)

 * 情報処理技術者試験は経済産業省主管
 * 電気通信の工事担任者試験は総務省主管
 * 技術士試験は文部科学省主管

という塩梅になります。

こういったスキルセットの分界点がきちんと存在せず、試験範囲が相互カバーされるような形になっている資格については、
資格取得を積極的にしていきたい人については結構好都合だったりするケースもあるように思います。

== 資格試験の学習時間においては１＋１は２にならない事がある

この世に存在する２つの資格を挙げ、並べて検討した時にそれぞれの試験範囲についてはだいたい以下のケースに分類できます。

 * 上位互換性があり、完全に包含関係にある(例えばITパスポート→基本情報技術者試験→応用情報技術者試験)
 * 範囲けっこう被ってる(日商簿記３級、全経簿記２級)
 * 範囲ちょっと被ってる(電気通信の工事担任者　デジタル一級、アマチュア無線四級)
 * 範囲がカスリもしない

それぞれのケースについて見ていきましょう。

=== 上位互換性があって包含関係になるもの

例えばエントリーレベルの試験(例えばITパスポート)をコンスタントに100点が狙える実力が準備できたとします。
その上位の試験は、だいたい私の感覚ですとそこまで勉強しなくとも同カテゴリの試験については60～70点は優に取れるように思います。

※当然ご存知の方も多いと思いますが、ITパスポートは4択の多岐選択問題だけなのに対し、基本情報技術者試験は午前が4択の多岐選択問題、
午後は実務に近い問題が多岐選択で出題されますので、午後試験については別途対策が必要になりますね…

これらの結果、１から全部勉強しなおす必要はなくて、１＋１が１．５とかぐらいで済んだりします。

=== 範囲けっこう被ってるもの

範囲が被っている試験も結構相互取得は楽だったりします。

例えば私の場合、日商簿記３級と全経簿記２級はほぼ同時取得したのですが、日商簿記３級に加え、全経簿記２級を取得する為に追加で要した時間は２日程度でした。
（※なお受験だけで１日換算です…　実質、数時間で追加の勘定科目のさばき方について学習し、過去問を解いた程度です。）

このケースだと１＋１が１．１ぐらいでした。
（まあ被っているので履歴書とかに書くのは１つになりますし、そこについては２つ取れたという事にそんなにメリットがあるわけでもないです。
むしろ受験機会を倍に増やした事で受験失敗のリスクヘッジを取ったといったほうが正しいかなぁ。）

あと、ベンダー試験や民間資格なども一般の国家資格などと範囲が被っているケースがままありますね。こういうのもうまく使えると良い気がします。
（私はベンダー試験については有効期限が短すぎて微妙な気がしているのでほぼほぼ未受験なのですが、
確かに振り返ってみるとOracle Master DBA Bronzeの試験はデータベーススペシャリストの基礎打ちとしては良かったんだろうなぁという気はしています。）

=== 範囲ちょっと被ってるもの

私が過去に受験したものでいうと、基本的な電子回路についてはアマチュア無線の試験で学んだのですが、
それが電気通信の工事担任者　デジタル一級の基礎部分の試験と似通った範囲が多く、学習が楽だった覚えがあります。

学習をしていく中で、知っている範囲がある事は時間の軽減以上に、苦痛の軽減効果が大きいように思います。
(ずっとわかんない事をやり続けるのって苦痛でしかないですよね…)

あと、大事なポイントとして基礎分野ほど被るケースが多いですね。ものによってはある種の資格を保持していると他の試験が科目免除されたりするものもあります。

=== 範囲がカスりもしないもの

単純に頑張ってください　という話になってしまいます。
取得済みの資格と取りたい資格に薄い関連性でも仮にある場合には、それら跨ぐような試験範囲の資格試験が存在する事も結構多く、
そういった試験を経由する事を検討するのも一つの手でしょう。

逆に、そういった橋桁になるスキルや資格が存在しないのであれば、スキル間におけるシナジーを期待しにくいのでは？という問題点もあるのではないでしょうか。
（やってる人が少ないという意味でもあるので、そこで専門家として地位を確立し、更に需要があれば２つのスキルセットで重なり合ったその分野は
ブルーオーシャンですよという事でもあるのですが…）

== おわりに

よく技術の世界でありがちな問題として、スキルを客観的に示しにくいという点がありますが、資格試験はその客観性についての
強い証明にはなると思います。
（資格を持ってるから必ずしも仕事ができるというわけでも無いのですが、あると一定のドアノック効果はあるように思います。
また、個人的に最近顕著に感じるのが、採用担当者は当然ながら人事のスペシャリストであって、技術のスペシャリストではないケースも多いので、
判断がつかないケースについては例えば書類選考を通した人があまりに微妙だった場合など、変な事になった時に社内での説明責任を負えない様に思います。
どうしてもそうなってしまうと、例えば学歴でフィルタリングしてみたり、資格でフィルタリングしてみたり　といった判断条件で母数を減らし、
安全策を取る事が多いのではないかなぁと…）

受諾開発などをされている方はどうしても業務に入り込めば入り込むほど自由時間が削られ、スキルのキャッチアップに時間を取れない、
業務が閑散としている時は逆に切羽詰まってないのでスキルをキャッチアップしたり資格を取得するのが面倒だなー　となる人が多いような気がするのですが、
試験というマイルストーンを設定してしまって、そこに向かって挑戦するだけでも何かしらの成長があるのではないかと個人的には思っています。

また私としては、試験をトリガーにしてその中で色々と学んでいく中で技術者としての視野の広がりや、課題解決能力の向上も感じることができたため、
目標を立て、挑戦してきた事は無駄ではなかったように感じています。

この記事が読まれた方の参考になれば幸いです。

====[column] ある種の試験は別の試験の入り口だったりもする

ある種の国家試験では、試験合格や資格取得が次のレベルの試験の受験資格や、他の試験の受験資格（応用情報技術者試験などは非常に強いですね…）になったり、科目免除特権を永久に得られたりします。
だいたい主管庁が同じだとそういったフローが強力に存在し、主管庁が違うと全然そういうフローがなかったりするのですが、
最近は管庁同士の連携も取られるようになってきて、管庁を跨いだ科目免除特権の設定なども見られるようになってきました。
(例えば最近ですと、情報処理技術者試験から技術士第一次試験(情報工学部門)への科目免除の新規設定ですね。情報を聞いた時には驚いたものです。)
そういった資格間の関連性について、俯瞰的に見てみるのも、新たなスキルを伸ばすヒントのような気がします。

====[/column]
