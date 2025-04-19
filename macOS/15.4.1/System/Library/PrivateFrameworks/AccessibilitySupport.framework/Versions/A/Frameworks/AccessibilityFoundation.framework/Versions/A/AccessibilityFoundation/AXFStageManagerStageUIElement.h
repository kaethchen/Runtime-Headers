@class NSArray, NSMutableArray;
@protocol AXFStageManagerWindowDataSource, AXFStageManagerWindowDelegate;

@interface AXFStageManagerStageUIElement : AXFMockUIElement

@property (retain, nonatomic) NSMutableArray *_windows;
@property (readonly, nonatomic) NSArray *windows;
@property (weak, nonatomic) id<AXFStageManagerWindowDataSource> dataSource;
@property (weak, nonatomic) id<AXFStageManagerWindowDelegate> delegate;

- (void).cxx_destruct;
- (id)accessibilityChildrenInNavigationOrder;
- (id)initWithWindows:(id)a0;
- (id)_valueForAttribute:(struct __CFString { } *)a0;
- (id)uiElementArrayForAXAttribute:(struct __CFString { } *)a0;
- (void)updateWindowsWithDifferences:(id)a0;

@end
