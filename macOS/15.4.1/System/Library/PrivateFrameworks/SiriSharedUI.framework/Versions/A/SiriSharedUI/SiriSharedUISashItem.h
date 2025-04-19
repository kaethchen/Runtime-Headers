@class NSString, NSImage, NSArray, NSObject, NSColor;
@protocol OS_dispatch_queue, SiriSharedUISashItemDelegate;

@interface SiriSharedUISashItem : NSObject {
    NSObject<OS_dispatch_queue> *_applicationIconPreparationQueue;
}

@property (weak, nonatomic) id<SiriSharedUISashItemDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSImage *image;
@property (readonly, nonatomic, getter=isSiriImage) BOOL siriImage;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSColor *textColor;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic) BOOL canPunchout;
@property (copy, nonatomic) NSArray *commands;
@property (nonatomic) BOOL requestsExtraPadding;
@property (readonly, nonatomic, getter=isPlaceHolderImage) BOOL placeHolderImage;

+ (id)languageCode;
+ (void)setLanguageCode:(id)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplicationBundleIdentifier:(id)a0;
- (id)initWithTitle:(id)a0 image:(id)a1;
- (void)_configureIconForAppProxy:(id)a0;

@end
