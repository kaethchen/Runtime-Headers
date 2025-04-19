@class NSString;

@interface GKBasePlayer : NSObject <NSCopying>

@property (readonly, retain) NSString *playerID;
@property (readonly) NSString *displayName;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)displayName;
- (id)playerID;

@end
