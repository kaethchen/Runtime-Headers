@class NSString, NSArray, NSDictionary, CLLocation, NSMutableDictionary;

@interface NSApplicationExtensionItem : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_storageDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *titleText;
@property (copy) NSString *contentText;
@property (copy) NSArray *photoAssets;
@property (copy) NSArray *videoAssets;
@property (copy) NSArray *attachments;
@property (copy) NSArray *links;
@property (copy) CLLocation *location;
@property (copy) NSDictionary *userInfo;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
