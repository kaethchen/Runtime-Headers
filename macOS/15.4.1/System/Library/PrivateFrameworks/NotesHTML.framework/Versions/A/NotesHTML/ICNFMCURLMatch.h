@class NSString;

@interface ICNFMCURLMatch : NSObject

@property (copy, nonatomic) NSString *url;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 url:(id)a1;

@end
