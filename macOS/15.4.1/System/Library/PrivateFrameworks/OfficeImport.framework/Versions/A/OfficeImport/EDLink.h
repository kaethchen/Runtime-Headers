@class EDCollection;

@interface EDLink : NSObject {
    int mType;
    EDCollection *mExternalNames;
}

+ (id)linkWithType:(int)a0;

- (id)description;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (int)type;
- (id)initWithType:(int)a0;
- (id)externalNames;

@end
