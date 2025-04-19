@class NSString;

@interface NDDownloadRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contentID;
@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) long long options;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, copy, nonatomic) NSString *issueID;
@property (readonly, copy, nonatomic) NSString *puzzleID;
@property (readonly, copy, nonatomic) NSString *recipeID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentID:(id)a0 options:(long long)a1;

@end
