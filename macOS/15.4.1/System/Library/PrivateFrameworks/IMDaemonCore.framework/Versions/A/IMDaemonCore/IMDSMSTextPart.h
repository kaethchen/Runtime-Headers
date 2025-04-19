@class NSString, NSMutableString;

@interface IMDSMSTextPart : NSObject

@property (readonly, retain, nonatomic) NSString *contentLocation;
@property (readonly, retain, nonatomic) NSMutableString *text;

- (void).cxx_destruct;
- (void)appendText:(id)a0;
- (id)initWithContentLocation:(id)a0;

@end
