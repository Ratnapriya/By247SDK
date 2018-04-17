Pod::Spec.new do |s|
  s.name         = "By247SDK"
  s.version      = '1.7.0'
  s.summary      = "By247SDK for iOS"
  s.description  = "By247SDK is chat platform SDK"
  s.homepage     = "http://krzyzanowskim.github.io/OpenSSL/"
  s.license	     = 'Code is MIT, then custom font licenses.'
  s.source       = { :git => "https://github.com/Ratnapriya/By247SDK.git", :tag => s.version}

  s.authors       =  {'Ratnapriya Saripalli' => 'ratnapriya.saripalli@247.ai'}
  
  s.ios.deployment_target = '9.0'
  s.source_files        = 'include/*.h'
  #s.public_header_files = 'include/**/*.h'
  #s.header_dir          = 'By247SDK'
  #s.preserve_paths      = 'lib/libBy247SDK.a'
  #s.vendored_libraries  = 'lib/libBy247SDK.a'

  #s.libraries = 'By247SDK'
  s.requires_arc = true
end
