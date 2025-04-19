@class NSImage, NSString;

@interface VUIDownloadButtonProperties : NSObject

@property (nonatomic) BOOL hasBorder;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL hasImage;
@property (retain, nonatomic) NSImage *image;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long downloadState;

- (void).cxx_destruct;

@end
