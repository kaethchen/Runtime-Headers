@class NSString, NSArray;

@interface AVContentProtectionConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *contentKeySystem;
@property (readonly, copy, nonatomic) NSArray *keyIdentifiers;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithContentKeySystem:(id)a0 keyIdentifiers:(id)a1;

@end
