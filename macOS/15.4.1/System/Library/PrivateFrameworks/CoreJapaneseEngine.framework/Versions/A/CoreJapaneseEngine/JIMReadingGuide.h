@class NSPanel, NSTextField;

@interface JIMReadingGuide : NSObject

@property (retain) NSPanel *window;
@property (weak) NSTextField *textField;
@property (nonatomic) long long windowLevel;
@property BOOL hidden;

+ (id)sharedReadingGuide;

- (void).cxx_destruct;
- (void)updateWithReading:(id)a0 autoConfimedLength:(long long)a1 forOriginalTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
