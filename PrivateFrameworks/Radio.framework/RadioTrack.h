/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, RadioArtworkCollection, RadioAudioClip;

@interface RadioTrack : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_bestOfferDictionary;
    NSDate *_expirationDate;
    BOOL _isPreorderAlbum;
    NSMutableDictionary *_trackDictionary;
}

@property(readonly) NSData * adData;
@property(readonly) RadioAudioClip * afterPromoAudioClip;
@property(readonly) NSString * album;
@property(readonly) NSString * albumBuyButtonText;
@property(readonly) int albumBuyButtonType;
@property(readonly) long long albumID;
@property(readonly) NSURL * albumURL;
@property(readonly) NSString * artist;
@property(readonly) RadioArtworkCollection * artworkCollection;
@property(readonly) NSArray * assets;
@property(readonly) RadioAudioClip * beforePromoAudioClip;
@property(readonly) NSString * copyrightText;
@property(readonly) long long dateFetched;
@property(readonly) NSString * debugMessage;
@property(readonly) double duration;
@property(retain) NSDate * expirationDate;
@property(readonly) NSDictionary * feedbackDictionaryRepresentation;
@property BOOL inWishList;
@property(readonly) BOOL isExplicit;
@property(readonly) BOOL isPreorderAlbum;
@property(readonly) int likeStatus;
@property(copy) NSDictionary * metadataDictionary;
@property(readonly) NSArray * offers;
@property(readonly) NSURL * previewURL;
@property(readonly) long long shuffleSeed;
@property(readonly) double startTime;
@property(readonly) long long storeID;
@property(readonly) NSString * title;
@property(readonly) NSDictionary * trackDictionary;
@property(readonly) NSDictionary * trackInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_offers;
- (void)_performTransaction:(id)arg1;
- (void)_performTransactionAndWait:(id)arg1;
- (void)_performWriteTransaction:(id)arg1;
- (void)_performWriteTransactionAndWait:(id)arg1;
- (id)_valueOfClass:(Class)arg1 forAssetInfoKey:(id)arg2;
- (id)_valueOfClass:(Class)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3;
- (id)_valueRespondingToSelector:(SEL)arg1 forMetadataKey:(id)arg2 fallbackTrackDictionaryKey:(id)arg3;
- (id)adData;
- (id)afterPromoAudioClip;
- (id)album;
- (id)albumBuyButtonText;
- (int)albumBuyButtonType;
- (long long)albumID;
- (id)albumURL;
- (id)artist;
- (id)artworkCollection;
- (id)assets;
- (id)beforePromoAudioClip;
- (id)copyrightText;
- (long long)dateFetched;
- (id)debugMessage;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)feedbackDictionaryRepresentation;
- (BOOL)inWishList;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackDictionary:(id)arg1;
- (BOOL)isExplicit;
- (BOOL)isPreorderAlbum;
- (int)likeStatus;
- (id)metadataDictionary;
- (id)offers;
- (id)previewURL;
- (void)setExpirationDate:(id)arg1;
- (void)setInWishList:(BOOL)arg1;
- (void)setMetadataDictionary:(id)arg1;
- (long long)shuffleSeed;
- (double)startTime;
- (long long)storeID;
- (id)title;
- (id)trackDictionary;
- (id)trackInfo;

@end