@class NSArray, NSPointerArray;

@interface _NSCGSWindowOrderingGroup : NSObject {
    NSPointerArray *_windows;
}

@property (readonly) NSArray *windows;
@property (readonly, getter=isEmpty) BOOL empty;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addWindow:(id)a0 aboveWindow:(id)a1;
- (id)initWithWindows:(id)a0;
- (void)removeWindow:(id)a0;

@end
