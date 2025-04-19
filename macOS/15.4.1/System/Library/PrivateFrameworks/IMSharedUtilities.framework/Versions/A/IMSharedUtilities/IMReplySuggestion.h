@class NSString;

@interface IMReplySuggestion : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *stringRepresentation;
@property (copy, nonatomic) NSString *attribution;
@property (nonatomic) long long tintColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 text:(id)a1;
- (void)trackSentAtIndex:(unsigned long long)a0 isNotification:(BOOL)a1;

@end
