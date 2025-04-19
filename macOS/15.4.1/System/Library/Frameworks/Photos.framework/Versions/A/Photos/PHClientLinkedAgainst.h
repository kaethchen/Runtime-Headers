@interface PHClientLinkedAgainst : NSObject

@property (readonly, nonatomic) BOOL clientLinkedOnOrAfterFall2023OSVersions;

- (id)init;
- (id)initWithXPCDict:(id)a0;
- (void)encodeToXPCDict:(id)a0;

@end
