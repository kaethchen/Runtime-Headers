@interface CTCellularData : NSObject

@property (copy) id /* block */ cellularDataRestrictionDidUpdateNotifier;
@property (readonly, nonatomic) unsigned long long restrictedState;

- (void).cxx_destruct;

@end
