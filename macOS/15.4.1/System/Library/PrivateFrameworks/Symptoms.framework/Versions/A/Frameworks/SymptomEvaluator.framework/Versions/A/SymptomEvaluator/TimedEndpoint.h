@class NSString, NSDate;

@interface TimedEndpoint : NSObject {
    NSString *_trigger;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) long long interfaceType;
@property (readonly, nonatomic) unsigned long long stallType;
@property (readonly, nonatomic) BOOL foreground;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)touch;
- (id)initWithEndpoint:(id)a0 trigger:(id)a1 interfaceType:(long long)a2 stallType:(unsigned long long)a3 foreground:(BOOL)a4;

@end
