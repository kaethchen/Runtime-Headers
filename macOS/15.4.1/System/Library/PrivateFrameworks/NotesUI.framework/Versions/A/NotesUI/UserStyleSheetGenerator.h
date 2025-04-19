@class NSString, NSURL;

@interface UserStyleSheetGenerator : NSObject

@property (readonly, nonatomic) NSString *userStyleSheetStringForMainWindow;
@property (readonly, nonatomic) NSURL *userStyleSheetURLForMainWindow;
@property (readonly, nonatomic) NSURL *userStyleSheetURLForSingleNoteWindow;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)archiveStyleSheet;
- (id)userStyleSheetStringWithTopMargin:(double)a0 bottomMargin:(double)a1;
- (id)userStyleSheetWithTopMargin:(double)a0 bottomMargin:(double)a1;

@end
