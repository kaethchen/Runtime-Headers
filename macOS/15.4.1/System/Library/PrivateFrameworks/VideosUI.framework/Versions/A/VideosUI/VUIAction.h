@class NSString;

@interface VUIAction : NSObject <VUIAction>

@property (retain, nonatomic) VUIAction *successAction;
@property (retain, nonatomic) VUIAction *failureAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithDictionary:(id)a0 appContext:(id)a1;

@end
