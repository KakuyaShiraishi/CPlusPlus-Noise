#ifdef NOISE_USE_GLM

#undef xx
#undef xy
#undef xz
#undef xw
#undef yx
#undef yy
#undef yz
#undef yw
#undef zx
#undef zy
#undef zz
#undef zw
#undef wx
#undef wy
#undef wz
#undef ww
#undef xxx
#undef xxy
#undef xxz
#undef xxw
#undef xyx
#undef xyy
#undef xyz
#undef xyw
#undef xzx
#undef xzy
#undef xzz
#undef xzw
#undef xwx
#undef xwy
#undef xwz
#undef xww
#undef yxx
#undef yxy
#undef yxz
#undef yxw
#undef yyx
#undef yyy
#undef yyz
#undef yyw
#undef yzx
#undef yzy
#undef yzz
#undef yzw
#undef ywx
#undef ywy
#undef ywz
#undef yww
#undef zxx
#undef zxy
#undef zxz
#undef zxw
#undef zyx
#undef zyy
#undef zyz
#undef zyw
#undef zzx
#undef zzy
#undef zzz
#undef zzw
#undef zwx
#undef zwy
#undef zwz
#undef zww
#undef wxx
#undef wxy
#undef wxz
#undef wxw
#undef wyx
#undef wyy
#undef wyz
#undef wyw
#undef wzx
#undef wzy
#undef wzz
#undef wzw
#undef wwx
#undef wwy
#undef wwz
#undef www
#undef xxxx
#undef xxxy
#undef xxxz
#undef xxxw
#undef xxyx
#undef xxyy
#undef xxyz
#undef xxyw
#undef xxzx
#undef xxzy
#undef xxzz
#undef xxzw
#undef xxwx
#undef xxwy
#undef xxwz
#undef xxww
#undef xyxx
#undef xyxy
#undef xyxz
#undef xyxw
#undef xyyx
#undef xyyy
#undef xyyz
#undef xyyw
#undef xyzx
#undef xyzy
#undef xyzz
#undef xyzw
#undef xywx
#undef xywy
#undef xywz
#undef xyww
#undef xzxx
#undef xzxy
#undef xzxz
#undef xzxw
#undef xzyx
#undef xzyy
#undef xzyz
#undef xzyw
#undef xzzx
#undef xzzy
#undef xzzz
#undef xzzw
#undef xzwx
#undef xzwy
#undef xzwz
#undef xzww
#undef xwxx
#undef xwxy
#undef xwxz
#undef xwxw
#undef xwyx
#undef xwyy
#undef xwyz
#undef xwyw
#undef xwzx
#undef xwzy
#undef xwzz
#undef xwzw
#undef xwwx
#undef xwwy
#undef xwwz
#undef xwww
#undef yxxx
#undef yxxy
#undef yxxz
#undef yxxw
#undef yxyx
#undef yxyy
#undef yxyz
#undef yxyw
#undef yxzx
#undef yxzy
#undef yxzz
#undef yxzw
#undef yxwx
#undef yxwy
#undef yxwz
#undef yxww
#undef yyxx
#undef yyxy
#undef yyxz
#undef yyxw
#undef yyyx
#undef yyyy
#undef yyyz
#undef yyyw
#undef yyzx
#undef yyzy
#undef yyzz
#undef yyzw
#undef yywx
#undef yywy
#undef yywz
#undef yyww
#undef yzxx
#undef yzxy
#undef yzxz
#undef yzxw
#undef yzyx
#undef yzyy
#undef yzyz
#undef yzyw
#undef yzzx
#undef yzzy
#undef yzzz
#undef yzzw
#undef yzwx
#undef yzwy
#undef yzwz
#undef yzww
#undef ywxx
#undef ywxy
#undef ywxz
#undef ywxw
#undef ywyx
#undef ywyy
#undef ywyz
#undef ywyw
#undef ywzx
#undef ywzy
#undef ywzz
#undef ywzw
#undef ywwx
#undef ywwy
#undef ywwz
#undef ywww
#undef zxxx
#undef zxxy
#undef zxxz
#undef zxxw
#undef zxyx
#undef zxyy
#undef zxyz
#undef zxyw
#undef zxzx
#undef zxzy
#undef zxzz
#undef zxzw
#undef zxwx
#undef zxwy
#undef zxwz
#undef zxww
#undef zyxx
#undef zyxy
#undef zyxz
#undef zyxw
#undef zyyx
#undef zyyy
#undef zyyz
#undef zyyw
#undef zyzx
#undef zyzy
#undef zyzz
#undef zyzw
#undef zywx
#undef zywy
#undef zywz
#undef zyww
#undef zzxx
#undef zzxy
#undef zzxz
#undef zzxw
#undef zzyx
#undef zzyy
#undef zzyz
#undef zzyw
#undef zzzx
#undef zzzy
#undef zzzz
#undef zzzw
#undef zzwx
#undef zzwy
#undef zzwz
#undef zzww
#undef zwxx
#undef zwxy
#undef zwxz
#undef zwxw
#undef zwyx
#undef zwyy
#undef zwyz
#undef zwyw
#undef zwzx
#undef zwzy
#undef zwzz
#undef zwzw
#undef zwwx
#undef zwwy
#undef zwwz
#undef zwww
#undef wxxx
#undef wxxy
#undef wxxz
#undef wxxw
#undef wxyx
#undef wxyy
#undef wxyz
#undef wxyw
#undef wxzx
#undef wxzy
#undef wxzz
#undef wxzw
#undef wxwx
#undef wxwy
#undef wxwz
#undef wxww
#undef wyxx
#undef wyxy
#undef wyxz
#undef wyxw
#undef wyyx
#undef wyyy
#undef wyyz
#undef wyyw
#undef wyzx
#undef wyzy
#undef wyzz
#undef wyzw
#undef wywx
#undef wywy
#undef wywz
#undef wyww
#undef wzxx
#undef wzxy
#undef wzxz
#undef wzxw
#undef wzyx
#undef wzyy
#undef wzyz
#undef wzyw
#undef wzzx
#undef wzzy
#undef wzzz
#undef wzzw
#undef wzwx
#undef wzwy
#undef wzwz
#undef wzww
#undef wwxx
#undef wwxy
#undef wwxz
#undef wwxw
#undef wwyx
#undef wwyy
#undef wwyz
#undef wwyw
#undef wwzx
#undef wwzy
#undef wwzz
#undef wwzw
#undef wwwx
#undef wwwy
#undef wwwz
#undef wwww

#endif