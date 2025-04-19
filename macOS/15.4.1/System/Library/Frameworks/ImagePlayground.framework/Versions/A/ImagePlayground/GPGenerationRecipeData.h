@class NSData;

@interface GPGenerationRecipeData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ underlyingData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *underlyingData;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getDrawOnImageRecipe;
- (id)getRecipeInfo;
- (id)initWithUnderlyingData:(id)a0;

@end
