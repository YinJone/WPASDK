Pod::Spec.new do |s|

s.name         = "GWPASDK"
s.version = "1.0.2"
s.summary      = "This is the Fon WPA SDK for iOS devices."
s.homepage     = "https://github.com/YinJone/WPASDK_gotell"
s.license      = "MIT"
s.author       = { "Jone.yin" => "yin_jone@163.com" }
s.ios.deployment_target = '9.0'
s.vendored_framework = 'WPASDK.framework'
s.frameworks = "Foundation"
s.requires_arc = true
s.source = { git: 'https://github.com/YinJone/WPASDK_gotell.git', :tag => s.version}

s.dependency 'MagicalRecord', '2.3.2'
s.dependency 'JSONModel', '1.7.0'
s.dependency 'KeychainItemWrapper', '1.2'

end