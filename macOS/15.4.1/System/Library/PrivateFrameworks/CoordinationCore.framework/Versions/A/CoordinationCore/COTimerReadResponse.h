@class NSArray;

@interface COTimerReadResponse : COMeshResponse

@property (readonly, copy, nonatomic) NSArray *timers;
@property (readonly, nonatomic, getter=isFiltered) BOOL filtered;
@property (readonly, copy, nonatomic) NSArray *deletes;
@property (readonly, nonatomic) BOOL skipInMerge;
@property (readonly, nonatomic) BOOL notModified;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimers:(id)a0;
- (id)initNotModifiedWithDeletes:(id)a0;
- (id)initWithFilteredTimers:(id)a0;
- (id)initWithSkipInMerge;
- (id)initWithTimers:(id)a0 deletes:(id)a1;

@end
