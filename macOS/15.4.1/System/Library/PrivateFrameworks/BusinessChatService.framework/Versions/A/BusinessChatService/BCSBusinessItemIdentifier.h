@class NSString, NSObject;

@interface BCSBusinessItemIdentifier : NSObject <BCSItemIdentifying>

@property (nonatomic) long long computedTruncatedHash;
@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, nonatomic) long long truncatedHash;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifierWithBusinessItem:(id)a0;
+ (id)identifierWithPhoneNumber:(id)a0;

- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)_initWithBusinessItem:(id)a0;
- (id)_initWithPhoneNumber:(id)a0;
- (long long)_truncatedHashForPhoneNumber:(id)a0;
- (BOOL)matchesItemIdentifying:(id)a0;

@end
