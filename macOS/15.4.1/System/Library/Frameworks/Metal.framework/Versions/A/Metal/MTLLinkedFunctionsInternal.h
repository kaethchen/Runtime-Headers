@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; NSDictionary *groups; } _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEmpty;
- (id)binaryFunctions;
- (id)formattedDescription:(unsigned long long)a0;
- (id)functions;
- (id)groups;
- (id)privateFunctions;
- (void)setBinaryFunctions:(id)a0;
- (void)setFunctions:(id)a0;
- (void)setGroups:(id)a0;
- (void)setPrivateFunctions:(id)a0;

@end
