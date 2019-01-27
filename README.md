# Re:VIEWテンプレート

## 概要説明
ワンストップ　目標設定

## この本の目的

https://engineers.connpass.com/event/113403/
目標設定の技術を勉強する会 #1
の参加者の皆様に向けての企画です。
もちろん、ほかの人もぜひご参加下さい。

登壇内容、思ったこと、合同誌にしませんか？

テクニカルな話、エモい話、両方OKです。
・目標を適切に定めて、それに向かって行動する、
・あるいは達成できなさそうなので軌道修正する、
・目標達成したぞほめて、
・私にはこんな目標がある、などなど。

それらに関するノウハウやテクニックを整理していただけませんか？
あるいは、自分の体験をまとめてみませんか？

文章に起こすことで整理される側面もあるでしょう。
他の人と共有しやすくなることもあるでしょう。
それを見て、行動を起こす人がいるかもしれません。

1ページからでも構いません。執筆者の仲間入りです。
5ページ書けますか？まとまった量で読み応えありますね。
10ページ書きますか？どんとこい。
そして、あなたの本を技術書典に参加する1万人（あるいはそれ以上）に届けませんか？

## 執筆・配布スケジュール
募集開始・環境構築　2019月1月27日  
章目次確定：2月15日  
本文初稿：2月末  
レビュー＆追記：3月15日  
入稿:3月20日
発行　技術書典6(日程、募集開始はまだですが)
を大枠なスケジュールとします。(多少前後します)

## 著者紹介兼あとがき
Contributers.re内に、テンプレートに従って記入ください。

## 執筆にあたってのお願い
CIでコンパイルが通ることを確認してください。エラーのまま放置はなるべくやめてください。

Confrictが発生した場合は、解決お願いします。

push -f等はやめましょう。（歴史を書き換えてはいけません。

相談事：
Issue立ててください。

雑談、ざっくばらんな相談については、Slackがあります。
参加方法は、親方まで。https://twitter.com/oyakata2438/
## Re:VIEWの書き方

[Re:VIEWチートシート](https://gist.github.com/erukiti/c4e3189dda179a0f0b73299fb5787838) を作ってみたので、参考にしてみてください。

## CI

でPDFが書きだされます。
一番上のBuildをクリックすると展開されるので、
Output Artifactをクリックして、Download artifactをクリックすると、
tarで固めたpdfがダウンロードできます。

## インストール

細かい準備(TeX入れたり)は[『技術書をかこう！』](https://github.com/TechBooster/C89-FirstStepReVIEW-v2)に準じます。

### WindowsでReviewを使う方法

https://qiita.com/implicit_none/items/398c6e0bbedc8b160621
暗黙の型宣言さんが詳しく書いてくれてます。あるいは、技術同人誌を書こう‐アウトプットのススメ‐をご覧ください。

### Dockerを使う方法

Dockerを使うのが一番手軽です。

```sh
$ docker run --rm -v `pwd`:/work vvakame/review /bin/sh -c "cd /work/articles ; review-pdfmaker config.yml"
```

### Docker使わずビルド

```sh
cd articles ; review pdfmaker config.yml
```

### 権利

ベースには、[TechBooster/ReVIEW\-Template: TechBoosterで利用しているRe:VIEWのテンプレート（B5/A5/電子書籍）](https://github.com/TechBooster/ReVIEW-Template) を使っています。

  * 設定ファイル、テンプレートなど制作環境（techbooster-doujin.styなど）はMITライセンスです
    * 再配布などMITライセンスで定める範囲で権利者表記をおねがいします
