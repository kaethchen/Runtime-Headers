@class NSString, NSMutableDictionary;

@interface TCDumpEnum : NSObject {
    NSString *mTypeName;
    NSMutableDictionary *mValueToNameMap;
    NSMutableDictionary *mNameToValueMap;
}

- (void).cxx_destruct;
- (id)typeName;
- (id)initWithTypeName:(id)a0 pairs:(struct TCDumpEnumPair { int x0; id x1; } *)a1;
- (id)nameForValue:(int)a0;
- (id)valueForName:(id)a0;

@end
