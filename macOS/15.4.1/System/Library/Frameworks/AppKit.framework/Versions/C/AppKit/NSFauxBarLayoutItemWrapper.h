@class NSString, NSObject;
@protocol _NSTouchBarItemLayoutWrapper;

@interface NSFauxBarLayoutItemWrapper : NSObject <NSBarLayoutWrapper> {
    NSObject<_NSTouchBarItemLayoutWrapper> *_backingItem;
    BOOL _isCentered;
}

@property (readonly) NSObject<_NSTouchBarItemLayoutWrapper> *backingItem;
@property (readonly) struct CGSize { double x0; double x1; } minSize;
@property (readonly) struct CGSize { double x0; double x1; } maxSize;
@property (readonly) BOOL isSpace;
@property (readonly) long long priorityIndex;
@property (readonly) BOOL wantsToBeCentered;
@property (readonly) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly) struct CGSize { double x0; double x1; } contentClippingSize;
@property (readonly) struct CGSize { double x0; double x1; } compressedMinSize;
@property (readonly) unsigned long long itemPosition;
@property (readonly) double preferredZOrder;
@property (readonly) double preferredTrailingPosition;
@property (readonly) BOOL participatesInOverflow;
@property (readonly) BOOL isTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFitsProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithBackingItem:(id)a0 isCentered:(BOOL)a1;
- (double)additionalWidthRequiredForProposedLayoutSize:(struct CGSize { double x0; double x1; })a0;

@end
