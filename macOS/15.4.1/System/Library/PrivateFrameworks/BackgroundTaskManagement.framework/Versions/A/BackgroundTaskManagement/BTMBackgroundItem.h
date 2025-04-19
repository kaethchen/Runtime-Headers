@class NSUUID, NSData, NSString;

@interface BTMBackgroundItem : NSObject <BTMBackgroundItem, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSUUID *identifier;
@property (retain) NSData *bookmark;
@property long long userElection;
@property unsigned long long type;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1 bookmark:(id)a2 userElection:(long long)a3;
- (id)initWithType:(unsigned long long)a0 bookmark:(id)a1;

@end
