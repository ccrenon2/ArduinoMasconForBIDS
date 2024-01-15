# Arduino one-handle MasterController for BIDS
## 使い方
使い方は簡単です。このスケッチをArduino UNO以上のIOピン(18ピン)を持つArduino系マイコンボードに書き込み、
<br>
2pin:P5 ~ 6pin:P1, 7pin:N, 8pin:抑速/B1, 9pin:B1/B2 ~ A2pin:EB/B8, A3pin:NA/EBとして配線します。(可変抵抗式ではありません)
<br>
※制動段は使用する車両の抑速の有無で配線ピンが異なります。抑速段が有る場合はEB含め10段制動になりますが、抑速段が無い場合EB含め9段制動となるため
<br>
8pin ~ A2pinを使用する必要があります。ちなみに抑速無し、EB含めた6段制動の場合は8pin ~ 13pinを使用します。
<br>
レバーサーは前進をA4,後退をA5に配線します。中立はピン数の都合上無くしていまが、正常に作動します。
