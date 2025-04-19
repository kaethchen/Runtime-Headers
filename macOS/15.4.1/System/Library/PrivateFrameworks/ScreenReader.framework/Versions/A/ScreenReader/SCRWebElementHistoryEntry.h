@class NSDictionary;

@interface SCRWebElementHistoryEntry : NSObject

@property (nonatomic) struct __AXUIElement { } *axElementRef;
@property (nonatomic) struct __AXUIElement { } *webAreaAXElementRef;
@property (retain, nonatomic) NSDictionary *storageDictionary;

- (void)dealloc;
- (void).cxx_destruct;

@end
