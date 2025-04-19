@class NSData, NSString;

@interface EKUIFileItem : NSObject

@property (copy) NSData *bookmark;
@property (copy) NSString *displayName;

+ (id)itemFromPlistRepresentation:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)url;
- (id)plistRepresentation;
- (id)title;
- (void)syncDisplayName;
- (id)initWithBookmark:(id)a0;

@end
