@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureIndexPicker : AVCaptureControl {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionLock;
}

@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue;
@property (nonatomic) long long selectedIndex;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) long long numberOfIndexes;
@property (readonly, copy, nonatomic) NSArray *localizedIndexTitles;
@property (copy, nonatomic) NSString *accessibilityIdentifier;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithLocalizedTitle:(id)a0 symbolName:(id)a1 localizedIndexTitles:(id)a2;
- (id)initWithLocalizedTitle:(id)a0 symbolName:(id)a1 numberOfIndexes:(long long)a2;
- (id)initWithLocalizedTitle:(id)a0 symbolName:(id)a1 numberOfIndexes:(long long)a2 localizedTitleTransform:(id /* block */)a3;
- (void)setActionQueue:(id)a0 action:(id /* block */)a1;

@end
