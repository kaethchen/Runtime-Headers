@class NSString;

@interface IPFeature : NSObject

@property double confidence;
@property double weight;
@property struct _NSRange { unsigned long long location; unsigned long long length; } matchRange;
@property (copy) NSString *textUnit;

- (id)description;
- (void).cxx_destruct;
- (id)xmlElement;
- (BOOL)isMatchStringInsideQuotationMarks;
- (id)matchString;
- (id)xmlElementAttributes;
- (id)xmlElementName;

@end
