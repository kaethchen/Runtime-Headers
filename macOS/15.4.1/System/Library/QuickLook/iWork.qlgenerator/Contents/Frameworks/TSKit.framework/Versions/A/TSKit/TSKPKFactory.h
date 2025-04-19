@class NSMutableDictionary;

@interface TSKPKFactory : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *recognizers;

+ (void)initialize;
+ (BOOL)pencilKitAvailable;
+ (id)recognizerWithType:(int)a0 mode:(int)a1;
+ (long long)toolTypeForInkType:(id)a0;

@end
