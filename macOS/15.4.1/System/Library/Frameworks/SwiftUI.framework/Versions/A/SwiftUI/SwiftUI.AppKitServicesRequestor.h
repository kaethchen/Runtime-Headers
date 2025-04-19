@class NSArray;

@interface SwiftUI.AppKitServicesRequestor : NSObject <NSServicesRequestor> {
    void /* unknown type, empty encoding */ serviceItem;
}

@property (nonatomic, readonly) NSArray *selectionItems;
@property (nonatomic, readonly) BOOL canReadSelectionFromItems;

- (id)init;
- (void).cxx_destruct;
- (void)readSelectionFromItems:(id)a0;
- (BOOL)readSelectionFromPasteboard:(id)a0;
- (BOOL)writeSelectionToPasteboard:(id)a0 types:(id)a1;

@end
