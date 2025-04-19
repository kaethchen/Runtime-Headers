@class NSCell, NSString, NSView, NSDictionary;

@interface NSToolTip : NSObject {
    struct { unsigned char ownerIsDisplayDelegate : 1; unsigned char fadesOutWhenInactive : 1; unsigned char isExpansionToolTip : 1; unsigned int reserved : 29; } ttFlags;
    NSDictionary *_dataDictionary;
    void *_weakData;
}

@property (nonatomic) void *data;
@property (copy, nonatomic) NSString *string;
@property (nonatomic) long long trackingNum;
@property (readonly, nonatomic) NSView *view;
@property (readonly, nonatomic) NSCell *cell;
@property (readonly, nonatomic) id owner;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trackingRect;
@property (nonatomic) BOOL ownerIsDisplayDelegate;
@property (readonly, nonatomic) BOOL fadesOutWhenInactive;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithView:(id)a0 cell:(id)a1 owner:(id)a2 ownerIsDisplayDelegate:(BOOL)a3 data:(void *)a4 trackingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 string:(id)a6;
- (BOOL)isExpansionToolTip;

@end
