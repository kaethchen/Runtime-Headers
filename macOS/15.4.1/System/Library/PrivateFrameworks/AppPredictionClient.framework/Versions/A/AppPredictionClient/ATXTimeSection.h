@class NSArray, NSString, ATXTime;

@interface ATXTimeSection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *rows;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long kind;
@property (readonly, nonatomic) ATXTime *representedTimeRangeStart;
@property (readonly, nonatomic) ATXTime *representedTimeRangeEnd;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRows:(id)a0 title:(id)a1 kind:(unsigned long long)a2;
- (id)initWithRows:(id)a0 title:(id)a1 kind:(unsigned long long)a2 representedTimeRangeStart:(id)a3 representedTimeRangeEnd:(id)a4;

@end
