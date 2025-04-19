@class NSImage;

@interface ACSHCursorViewTabInfo : NSObject

@property (retain, nonatomic) NSImage *normalImage;
@property (retain, nonatomic) NSImage *selectedImage;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isAvailable;

- (id)description;
- (void).cxx_destruct;

@end
