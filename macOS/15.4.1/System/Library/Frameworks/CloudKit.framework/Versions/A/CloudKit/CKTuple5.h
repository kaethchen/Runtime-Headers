@interface CKTuple5 : CKTuple

@property (retain, nonatomic) id v1;
@property (retain, nonatomic) id v2;
@property (retain, nonatomic) id v3;
@property (retain, nonatomic) id v4;
@property (retain, nonatomic) id v5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithObject1:(id)a0 object2:(id)a1 object3:(id)a2 object4:(id)a3 object5:(id)a4;

@end
