@class NSSet;

@interface VNDisallowedList : NSObject <NSCopying> {
    NSSet *_identifiers;
}

@property (readonly) unsigned long long identifierCount;
@property (readonly, copy) NSSet *allIdentifiers;

+ (id)disallowedListFromUTF8StringArray:(const char **)a0;
+ (id)sceneNetV3;
+ (id)sceneNetV5;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0;
- (BOOL)containsIdentifier:(id)a0;

@end
