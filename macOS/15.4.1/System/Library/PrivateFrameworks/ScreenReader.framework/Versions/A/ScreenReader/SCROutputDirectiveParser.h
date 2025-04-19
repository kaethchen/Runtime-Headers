@class NSRegularExpression, NSString;

@interface SCROutputDirectiveParser : NSObject <SCROutputSubstitutionParserProtocol>

@property (retain, nonatomic) NSRegularExpression *regex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)parseRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofString:(id)a1 inAction:(id)a2;

@end
