@class NSString, NSURL;

@interface PLSharedAssetsContainerIncrementalChangeHighlightContainerChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *relationshipKey;
@property (retain, nonatomic) NSURL *sourceHighlightURI;
@property (retain, nonatomic) NSURL *destinationHighlightURI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
