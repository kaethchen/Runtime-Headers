@class NSString, NSImage, NSDate, NSColor;

@interface WBSTouchIconResponse : WBSSiteMetadataResponse <WBSIconResponse>

@property (readonly, nonatomic) NSImage *touchIcon;
@property (readonly, nonatomic) NSColor *extractedBackgroundColor;
@property (retain, nonatomic) NSDate *nextIconDownloadRetryDate;
@property (readonly, nonatomic, getter=isGenerated) BOOL generated;
@property (readonly, nonatomic) NSImage *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseWithURL:(id)a0 touchIcon:(id)a1 generated:(BOOL)a2 extractedBackgroundColor:(id)a3;

@end
