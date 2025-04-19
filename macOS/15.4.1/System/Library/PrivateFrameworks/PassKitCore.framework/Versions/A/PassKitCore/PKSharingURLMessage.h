@class NSURL;

@interface PKSharingURLMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSURL *url;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)configureWithContent:(id)a0;

@end
