@class NSArray, NSString;

@interface JSOCTypeStruct : JSOCType {
    NSString *_tag;
    const char *_extendedObjCType;
}

@property (readonly) NSArray *properties;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (const char *)extendedObjCType;
- (id)initWithTag:(id)a0 properties:(id)a1;
- (id)structTag;

@end
