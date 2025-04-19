@class NSNumber, NSDictionary, NSString;

@interface FBKSCustomBehavior : NSObject

@property (nonatomic) BOOL makeVisible;
@property (nonatomic) BOOL notifyOnUpload;
@property (retain, nonatomic) NSNumber *formId;
@property (retain, nonatomic) NSDictionary *answers;
@property (nonatomic) BOOL launchNewDraft;
@property (nonatomic) BOOL isCaptive;
@property (readonly, copy, nonatomic) NSString *description;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
