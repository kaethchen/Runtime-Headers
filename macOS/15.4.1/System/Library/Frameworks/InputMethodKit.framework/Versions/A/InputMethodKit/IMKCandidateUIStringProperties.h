@class NSDictionary, NSString;

@interface IMKCandidateUIStringProperties : NSObject

@property (retain, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSString *title;

- (void)dealloc;
- (id)initWithDictionary:(id)a0 key:(id)a1;

@end
