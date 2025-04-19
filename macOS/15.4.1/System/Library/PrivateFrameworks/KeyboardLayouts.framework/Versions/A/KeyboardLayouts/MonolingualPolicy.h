@class NSString, NSLocale;

@interface MonolingualPolicy : NSObject <KLPrimaryInputSourcePolicy>

@property (retain, nonatomic) NSLocale *primaryLocale;
@property (retain, nonatomic) NSString *primaryInputSource;

- (void).cxx_destruct;
- (id)initWithPrimaryLocale:(id)a0 inputSource:(id)a1;
- (BOOL)isPrimaryInputSource:(id)a0;

@end
