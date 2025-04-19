@class NSString, NSProgress, NSArray, NSMutableArray;

@interface NSFontAssetRequest : NSObject <NSProgressReporting> {
    NSArray *_sourceFontDescriptors;
    NSProgress *_progress;
    unsigned long long _options;
}

@property (copy) NSMutableArray *downloadedFontDescriptors;
@property (readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
